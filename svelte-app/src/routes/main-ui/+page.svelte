<script>
    import '../../app.css';
    import CustomButton from '../colour-buttons/CustomButton.svelte';
</script>

<main class="container">
    <div class="flex flex-col items-center gap-6">
        <h1 class="control-panel-title">LEDify Control Panel</h1>

        <div class="power-control">
            <button id="power-button">Power</button>
        </div>

        <div class="control-panel" id="defaultPicker">
            <label for="color-picker">Pick a Color:</label>
        </div>

        <div class="brightness-level">
            <label for="brightness-slider" class="slider-label">Brightness:</label>
            <input type="range" id="brightness-slider" min="0" max="255" value="128" class="styled-slider">
        </div>

        <div class="preset-colours">
            <h2>Preset Colors</h2>            
            <CustomButton color="red" customClass="main-ui" shadow>Red</CustomButton>
            <CustomButton color="green" customClass="main-ui" shadow>Green</CustomButton>
            <CustomButton color="blue" customClass="main-ui" shadow>Blue</CustomButton>
            <CustomButton color="white" customClass="main-ui" shadow>White</CustomButton>
            <CustomButton color="purple" customClass="main-ui" shadow>Purple</CustomButton>
            <CustomButton color="yellow" customClass="main-ui" shadow>Yellow</CustomButton>
            <CustomButton color="orange" customClass="main-ui" shadow>Orange</CustomButton>
            <CustomButton color="pink" customClass="main-ui" shadow>Pink</CustomButton>
            <CustomButton color="cyan" customClass="main-ui" shadow>Cyan</CustomButton>
            <CustomButton color="darkGreen" customClass="main-ui" shadow>Dark Green</CustomButton>
            <CustomButton color="gold" customClass="main-ui" shadow>Gold</CustomButton>
        </div>
    </div>
</main>

<style>
    .control-panel-title{
        font-size: 3rem;
        font-weight: bold;
        margin-bottom: 1rem;
        text-align: center;
    }

    .power-control{
        padding: 10px 30px;
        background:#3b82f6;
        color: white;
        border: none;
        border-radius: 12px;
        font-size: 1.2rem;
        cursor: pointer;
        box-shadow: 0 4px 8px rgba(0, 0, 0, 0.2);
        transition: transform 0.2s ease;
    }

    .power-control:hover{
        transform: scale(1.05);
        filter: brightness(1.1);
    }

    .slider-label {
        font-size: 1.2rem;
        color: #111827;
        margin-right: 0.5rem;
    }

    .styled-slider {
        width: 200px;
        accent-color: #2563eb;
        border-radius: 5px;
    }

    #defaultPicker {
        display: flex;
        justify-content: center;
        align-items: center;
        margin: 0 auto;
        padding: 20px;
        width: 100%;
        max-width: 300px;
        background-color: white;
        border-radius: 10px;
        box-shadow:  0 4px 8px rgba(0, 0, 0, 0.2);
    }

    .preset-colours {
        display: flex;
        flex-wrap: wrap;
        justify-content: center;
        gap: 1rem;
        padding: 2rem;
    }
</style>
