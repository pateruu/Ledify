<script>
    import { Button, GradientButton } from 'flowbite-svelte';
    import CustomButton from '../colour-buttons/CustomButton.svelte';
</script>

<main>
    <div class="button-container">
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 1</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 2</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 3</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 4</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 5</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 6</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 7</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 8</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 9</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 10</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 11</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 12</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 13</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 14</CustomButton>
        <CustomButton color="white" customClass="colour-buttons" shadow>Animation 15</CustomButton>
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