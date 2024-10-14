document.addEventListener('DOMContentLoaded', function(){

    // Declare constants
    const powerButton = document.getElementById('power-button');
    const colorPicker = document.getElementById('color-picker');
    const brightnessSlider = document.getElementById('brightness-slider');
    const presetButtons = document.querySelectorAll('.preset-colour'); // Fixed query selector

    // Power Button
    powerButton.addEventListener('click', () =>{
        fetch('/togglePower')
            .then(response => response.json())
            .then(data => console.log('Power toggled:', data))
            .catch(error => console.error('Error toggling power:', error));
    });

    // Color Picker
    colorPicker.addEventListener('input', () => {
        const color = colorPicker.value; // Changed 'power' to 'color'
        fetch(`/setColor?color=${encodeURIComponent(color)}`) // Fixed template literal
            .then(response => response.json())
            .then(data => console.log('Color Changed:', data))
            .catch(error => console.error('Error changing color:', error));
    });

    // Brightness Slider
    brightnessSlider.addEventListener('input', () => {
        const brightness = brightnessSlider.value;
        fetch(`/setBrightness?brightness=${brightness}`) // Fixed template literal
            .then(response => response.json())
            .then(data => console.log('Setting brightness:', data))
            .catch(error => console.error('Error changing brightness:', error));
    });

    // Preset Color Buttons
    presetButtons.forEach(button => {
        button.addEventListener('click', () => {
            const color = button.getAttribute('data-colour');
            fetch(`/setColor?color=${encodeURIComponent(color)}`) // Fixed template literal
                .then(response => response.json())
                .then(data => console.log('Preset Color:', data))
                .catch(error => console.error('Error setting preset color:', error));
        });
    });
});