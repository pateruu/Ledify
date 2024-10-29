<script>
    import { Button, GradientButton } from 'flowbite-svelte';
</script>

<main>
    <div class="container">
        <h1>LEDify Control Panel</h1>

        <div class="power-control">
            <button id="power-button">Power</button>
        </div>

        <div class="control-panel" id="defaultPicker">
            <label for="color-picker">Pick a Color:</label>
        </div>

        <div class="brightness-level">
            <label for="brightness-slider">Brightness:</label>
            <input type="range" id="brightness-slider" min="0" max="255" value="128">
        </div>

        <div class="preset-colours">
            <h2>Preset Colors</h2>
            <button class="preset-colour" data-colour="#ff0000" style="background-color: #ff0000;">Red</button>
            <button class="preset-colour" data-colour="#00ff00" style="background-color: #00ff00;">Green</button>
            <button class="preset-colour" data-colour="#0000ff" style="background-color: #0000ff;">Blue</button>
            <button class="preset-colour" data-colour="#ffffff" style="background-color: #ffffff;">White</button>
            <button class="preset-colour" data-colour="#800080" style="background-color: #800080;">Purple</button>
            <button class="preset-colour" data-colour="#ffff00" style="background-color: #ffff00;">Yellow</button>
            <button class="preset-colour" data-colour="#ffa500" style="background-color: #ffa500;">Orange</button>
            <button class="preset-colour" data-colour="#ff1493" style="background-color: #ff1493;">Pink</button>
            <button class="preset-colour" data-colour="#00ffff" style="background-color: #00ffff;">Cyan</button>
            <button class="preset-colour" data-colour="#ff69b4" style="background-color: #ff69b4;">Hot Pink</button>
            <button class="preset-colour" data-colour="#008000" style="background-color: #008000;">Dark Green</button>
            <button class="preset-colour" data-colour="#ffd700" style="background-color: #ffd700;">Gold</button>
            

            <GradientButton shadow color="blue">Blue</GradientButton>
            <GradientButton shadow color="green">Green</GradientButton>
            <GradientButton shadow color="cyan">Cyan</GradientButton>
            <GradientButton shadow color="teal">Teal</GradientButton>
            <GradientButton shadow color="lime">Lime</GradientButton>
            <GradientButton shadow color="red">Red</GradientButton>
            <GradientButton shadow color="pink">Pink</GradientButton>
            <GradientButton shadow color="purple">Purple</GradientButton>
                
        </div>
    </div>
    <script src="/script.js"></script>
</main>
    
<style>

    #defaultPicker{
    display: flex;
    justify-content: center; /* Center horizontally */
    align-items: center; /* Center vertically */
    margin: 0 auto; /* Center horizontally within the container*/
    padding: 20px;
    width: 100%;
    max-width: 300px;
    background-color: white; /* background colour  */
    border-radius: 10px; /* rounded borders */
    box-shadow:  0 4px 8px rgba(0,0,0,0.2); /* small shadow */

}
</style>