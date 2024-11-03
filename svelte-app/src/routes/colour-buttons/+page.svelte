<script>
    import { Button, GradientButton } from 'flowbite-svelte';
    import ExtendedGradientButton from './ExtendedGradientButton.svelte';
</script>

<main>

    <div class="button-container">
        <GradientButton shadow color="blue" class="large-btn">Blue</GradientButton>
        <GradientButton shadow color="green" class="large-btn">Green</GradientButton>
        <GradientButton shadow color="cyan" class="large-btn">Cyan</GradientButton>
        <GradientButton shadow color="teal" class="large-btn">Teal</GradientButton>
        <GradientButton shadow color="lime" class="large-btn">Lime</GradientButton>
        <GradientButton shadow color="red" class="large-btn">Red</GradientButton>
        <GradientButton shadow color="pink" class="large-btn">Pink</GradientButton>
        <GradientButton shadow color="purple" class="large-btn">Purple</GradientButton>

        <ExtendedGradientButton shadow color="orange" >Orange</ExtendedGradientButton>
        <ExtendedGradientButton shadow color="indigo" >Indigo</ExtendedGradientButton>

    </div>

</main>
    
<style>
    :global(.large-btn){
        font-size: 1.75rem;
        padding: 2.5rem 3rem;
    }

    :global(.large-btn:hover){
        transform: scale(1.05);
        transition: transform 0.2s ease;
    }

    :global(.large-btn) {
    border-radius: 10px;
    }
 

    .button-container{
        display: grid;
        justify-content: center;
        grid-template-columns: repeat(auto-fit, minmax(150px, 1fr));
        gap: 1rem;
        padding: 2rem;
        max-width: 1200px;
        margin: auto;
    }
    
</style>