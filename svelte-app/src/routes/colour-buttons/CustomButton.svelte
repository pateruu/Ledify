<script lang="ts">
    export let color = 'blue'; // Default color
    export let shadow = true;
    export let hoverEffect = true;
    export let customClass: string = ''; // Custom class prop for specific styles

    // Define color classes for gradients
    const colourClasses = {
        red: "text-white bg-gradient-to-r from-red-500 to-red-700",
        green: "text-white bg-gradient-to-r from-green-500 to-green-700",
        blue: "text-white bg-gradient-to-r from-blue-500 to-blue-700",
        lime: "text-white bg-gradient-to-r from-lime-500 to-lime-700",
        pink: "text-white bg-gradient-to-r from-pink-500 to-pink-700",
        orange: "text-white bg-gradient-to-r from-orange-500 to-red-500",
        navy: "text-white bg-gradient-to-r from-blue-800 to-blue-900",
        lavender: "text-white bg-gradient-to-r from-purple-300 to-purple-400",
        purple: "text-white bg-gradient-to-r from-purple-500 to-purple-700",
        violet: "text-white bg-gradient-to-r from-purple-600 to-purple-800",
        indigo: "text-white bg-gradient-to-r from-indigo-500 to-indigo-700",
        yellow: "text-black bg-gradient-to-r from-yellow-300 to-yellow-400",
        aquamarine: "text-black bg-gradient-to-r from-teal-200 to-teal-400",
        gold: "text-black bg-gradient-to-r from-yellow-400 to-yellow-600",
        white: "text-black bg-gradient-to-r from-gray-100 to-gray-300",
        cyan: "text-white bg-gradient-to-r from-cyan-500 to-cyan-700",
        darkGreen: "text-white bg-gradient-to-r from-green-800 to-green-900",
        turquoise: "text-white bg-gradient-to-r from-teal-500 to-teal-600",
    };

    // Set default gradient color class
    let gradientClass = colourClasses[color] || colourClasses.blue;
</script>

<button 
    class={`rounded-lg font-semibold ${gradientClass} ${shadow ? 'shadow-lg' : ''} ${hoverEffect ? 'hover-effect' : ''} ${customClass}`}>
    <slot />
</button>

<style>
    /* Hover effect */
    .hover-effect:hover {
        transform: scale(1.05);
        filter: brightness(1.1);
    }

    /* Shadow style */
    .shadow-lg {
        box-shadow: 0px 4px 15px rgba(0, 0, 0, 0.2);
    }

    /* Button Classes */
    .main-ui{
        font-size: 1rem;
        padding: 0.75rem 1.25rem;
        border-radius: 5px;
        transition: transform 0.2s ease, background 0.2s ease;
    }

    .colour-buttons{
        font-size: 1.75rem;
        padding: 2.3rem 3rem;
        border-radius: 10px;
        transition: transform 0.2s ease, background 0.2s ease;
    }

</style>
