<script>
    export let color = 'blue'; // Set default color
    export let shadow = false;

    // Define color classes for gradients (custom and default)
    const colorClasses = {
        red: "text-white bg-gradient-to-r from-red-500 to-red-700 hover:from-red-600 hover:to-red-800",
        green: "text-white bg-gradient-to-r from-green-500 to-green-700 hover:from-green-600 hover:to-green-800",
        blue: "text-white bg-gradient-to-r from-blue-500 to-blue-700 hover:from-blue-600 hover:to-blue-800",
        purple: "text-white bg-gradient-to-r from-purple-500 to-purple-700 hover:from-purple-600 hover:to-purple-800",
        teal: "text-white bg-gradient-to-r from-teal-500 to-teal-700 hover:from-teal-600 hover:to-teal-800",
        cyan: "text-white bg-gradient-to-r from-cyan-500 to-cyan-700 hover:from-cyan-600 hover:to-cyan-800",
        lime: "text-white bg-gradient-to-r from-lime-500 to-lime-700 hover:from-lime-600 hover:to-lime-800",
        yellow: "text-white bg-yellow-500 hover:bg-yellow-600",
        
        // Custom colors
        orange: "text-white bg-gradient-to-r from-orange-500 to-red-500 hover:from-orange-600 hover:to-red-600",
        indigo: "text-white bg-gradient-to-r from-indigo-500 to-purple-500 hover:from-indigo-600 hover:to-purple-600",
        pinkToPurple: "text-white bg-gradient-to-r from-pink-500 to-purple-500 hover:from-pink-600 hover:to-purple-600",
        tealToGreen: "text-white bg-gradient-to-r from-teal-500 to-green-500 hover:from-teal-600 hover:to-green-600",
    };

    // Determine gradient class based on color prop, with a fallback to blue
    let gradientClass = colorClasses[color] || colorClasses.blue;
</script>

<!-- Button template -->
<button class={`rounded-lg px-5 py-3 font-semibold large-btn ${gradientClass} ${shadow ? 'shadow-lg' : ''}`}>
    <slot />
</button>

<style>
    /* Custom styling for button components */
</style>
