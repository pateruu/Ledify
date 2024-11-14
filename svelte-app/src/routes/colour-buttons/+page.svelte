<script>
    import { Button, GradientButton } from 'flowbite-svelte';
    import CustomButton from './CustomButton.svelte';
</script>

<main>
    <div class="button-container">
        <CustomButton color="red" customClass="colour-buttons" shadow>Red</CustomButton>
        <CustomButton color="green" customClass="colour-buttons" shadow>Green</CustomButton>
        <CustomButton color="blue" customClass="colour-buttons" shadow>Blue</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>White</CustomButton>
        <CustomButton color="lavender" customClass="colour-buttons" shadow>Lavender</CustomButton>
        <CustomButton color="purple" customClass="colour-buttons" shadow>Purple</CustomButton>
        <CustomButton color="violet" customClass="colour-buttons" shadow>Violet</CustomButton>
        <CustomButton color="indigo" customClass="colour-buttons" shadow>Indigo</CustomButton>
        <CustomButton color="pink" customClass="colour-buttons" shadow>Pink</CustomButton>
        <CustomButton color="lime" customClass="colour-buttons" shadow>Lime</CustomButton>
        <CustomButton color="darkGreen" customClass="colour-buttons" shadow>Dark Green</CustomButton>
        <CustomButton color="orange" customClass="colour-buttons" shadow>Orange</CustomButton>
        <CustomButton color="aquamarine" customClass="colour-buttons" shadow>Aquamarine</CustomButton>
        <CustomButton color="turquoise" customClass="colour-buttons" shadow>Turquoise</CustomButton>
        <CustomButton color="cyan" customClass="colour-buttons" shadow>Cyan</CustomButton>
        <CustomButton color="navy" customClass="colour-buttons" shadow>Navy</CustomButton>
        <CustomButton color="yellow" customClass="colour-buttons" shadow>Yellow</CustomButton>
        <CustomButton color="gold" customClass="colour-buttons" shadow>Gold</CustomButton>
    </div>
</main>
    
<style>
    .button-container {
        display: grid;
        justify-content: center;
        grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
        gap: 1rem;
        padding: 2rem;
        max-width: 1200px;
        margin: auto;
    }
</style>