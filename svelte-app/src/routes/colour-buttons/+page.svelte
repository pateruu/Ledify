<script>
    import { Button, GradientButton } from 'flowbite-svelte';
    import CustomButton from './CustomButton.svelte';
</script>

<main>

    <div class="button-container">
        <CustomButton color="red" shadow>Red</CustomButton>
        <CustomButton color="green" shadow>Green</CustomButton>
        <CustomButton color="blue" shadow>Blue</CustomButton>
        <CustomButton color="white" shadow>White</CustomButton>
        <CustomButton color="lavender" shadow>Lavender</CustomButton>
        <CustomButton color="purple" shadow>Purple</CustomButton>
        <CustomButton color="violet" shadow>Violet</CustomButton>
        <CustomButton color="indigo" shadow>Indigo</CustomButton>
        <CustomButton color="pink" shadow>Pink</CustomButton>
        <CustomButton color="lime" shadow>Lime</CustomButton>
        <CustomButton color="darkGreen" shadow>Dark Green</CustomButton>
        <CustomButton color="orange" shadow>Orange</CustomButton>
        <CustomButton color="aquamarine" shadow>Aquamarine</CustomButton>
        <CustomButton color="turquoise" shadow>Turquoise</CustomButton>
        <CustomButton color="cyan" shadow>Cyan</CustomButton>
        <CustomButton color="navy" shadow>Navy</CustomButton>
        <CustomButton color="yellow" shadow>Yellow</CustomButton>
        <CustomButton color="gold" shadow>Gold</CustomButton>
        
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