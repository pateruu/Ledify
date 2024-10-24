document.addEventListener('DOMContentLoaded', function(){

    //Declare constants
    const powerButton = document.getElementById('power-button');
    const defaultPicker = new iro.ColorPicker("#defaultPicker", {
        width: 250,
        color: "rgb(255, 0, 0)",
        borderWidth: 1,
        borderColor: "#fff",
      });
    const colorPicker = document.getElementById('color-picker');
    const brightnessSlider = document.getElementById('brightness-slider');
    const presetButtons = document.querySelectorAll('.preset-colour');

    //Power Button
    powerButton.addEventListener('click', () =>{
        fetch('/togglePower')
            .then(response => response.json())
            .then(data => console.log('Power toggled:', data))
            .catch(error => console.error('Error toggling power:', error));
    });

    //Colour Picker
    defaultPicker.on('color:change', function(color){
        const hexColor = color.hexString;
        fetch(`/setColor?color=${encodeURIComponent(hexColor)}`)
            .then(response => response.json())
            .then(data => console.log('Color Changed: ', data))
            .catch(error => console.log('Error changing color:', error));
    });
    
    //Brightness Slider
    brightnessSlider.addEventListener('input', () => {
        const brightness = brightnessSlider.value;
        fetch(`/setBrightness?brightness=${brightness}`)
            .then(response => response.json())
            .then(data => console.log('Setting brightness:', data))
            .catch(error => console.error('Error changing brightness:', error));
    });

    //Preset Color Buttons
    presetButtons.forEach(button => {
        button.addEventListener('click', () => {
            const color = button.getAttribute('data-colour');
            fetch(`/setColor?color=${encodeURIComponent(color)}`)
                .then(response => response.json())
                .then(data => console.log('Preset Color:', data))
                .catch(error => console.error('Error setting preset color:', error));
        });
    });
});