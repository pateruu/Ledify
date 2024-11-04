<script>
    import { Button, GradientButton } from 'flowbite-svelte';
    import CustomButton from './CustomButton.svelte';
</script>

<main>

    <div class="button-container">
        <CustomButton color="blue" shadow>Blue</CustomButton>
        <CustomButton color="green" shadow>Green</CustomButton>
        <CustomButton color="cyan" shadow>Cyan</CustomButton>
        <CustomButton color="teal" shadow>Teal</CustomButton>
        <CustomButton color="lime" shadow>Lime</CustomButton>
        <CustomButton color="red" shadow>Red</CustomButton>
        <CustomButton color="purple" shadow>Purple</CustomButton>
        <CustomButton color="orange" shadow>Orange</CustomButton>
        <CustomButton color="indigo" shadow>Indigo</CustomButton>
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