<script lang="ts">
    export let color = 'blue'; //Default
    export let shadow = true;
    export let hoverEffect = true;
    
    //Colour Classes for Gradients
    const colourClasses = {
        red: "text-white bg-gradient-to-r from-red-500 to-red-700 hover:from-red-600 hover:to-red-800",
        green: "text-white bg-gradient-to-r from-green-500 to-green-700 hover:from-green-600 hover:to-green-800",
        blue: "text-white bg-gradient-to-r from-blue-500 to-blue-700 hover:from-blue-600 hover:to-blue-800",
        purple: "text-white bg-gradient-to-r from-purple-500 to-purple-700 hover:from-purple-600 hover:to-purple-800",
        teal: "text-white bg-gradient-to-r from-teal-500 to-teal-700 hover:from-teal-600 hover:to-teal-800",
        cyan: "text-white bg-gradient-to-r from-cyan-500 to-cyan-700 hover:from-cyan-600 hover:to-cyan-800",
        lime: "text-white bg-gradient-to-r from-lime-500 to-lime-700 hover:from-lime-600 hover:to-lime-800",
        orange: "text-white bg-gradient-to-r from-orange-500 to-red-500 hover:from-orange-600 hover:to-red-600",
        indigo: "text-white bg-gradient-to-r from-indigo-500 to-purple-500 hover:from-indigo-600 hover:to-purple-600",
        pinkToPurple: "text-white bg-gradient-to-r from-pink-500 to-purple-500 hover:from-pink-600 hover:to-purple-600",
        tealToGreen: "text-white bg-gradient-to-r from-teal-500 to-green-500 hover:from-teal-600 hover:to-green-600",
    };

    //Set defualt class
    let gradientClass = colourClasses[color] || colourClasses.blue;
</script>

<button 
    class={`rounded-lg px-5 py-3 font-semibold ${gradientClass} ${shadow ? 'shadow-lg' : ''} ${hoverEffect ? 'hover-effect' : ''}`}>
    <slot />
</button>

<style>
    /* Button Style */
    button {
        font-size: 1.75rem;
        padding: 2.5rem 3rem;
        border-radius: 10px;
        transition: transform 0.2s ease, background 0.2s ease;
    }

    /* Hover effect */
    .hover-effect:hover {
        transform: scale(1.05);
        filter: brightness(1.1);
    }

    /* Shadow style */
    .shadow-lg {
        box-shadow: 0px 4px 15px rgba(0, 0, 0, 0.2);
    }
</style>
