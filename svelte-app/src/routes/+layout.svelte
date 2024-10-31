<script>
	import '../app.css';
	import { Navbar, NavBrand, NavLi, NavUl, NavHamburger } from 'flowbite-svelte';

	let isDarkMode = false;

	function toggleTheme() {
		isDarkMode = !isDarkMode;
		if (typeof document !== 'undefined') {
			document.documentElement.classList.toggle('dark', isDarkMode);
			document.body.className = isDarkMode ? 'bg-darkBg text-darkText' : 'bg-lightBg text-lightText';
		}
	}
</script>

<!-- Navbar and Main Content -->
<div class="transition-colors duration-500 min-h-screen">
	<!-- Sticky Navbar -->
	<Navbar class="px-4 py-2.5 fixed w-full z-20 top-0 start-0 border-b bg-lightBg dark:bg-darkBg transition-colors duration-500">
		<NavBrand href="/">
			<img src="/ledify-logo.png" class="me-3 h-6 sm:h-11 rounded-full" alt="LEDify Logo" />
			<span class="self-center whitespace-nowrap text-xl font-semibold text-lightText dark:text-darkText">LEDify</span>
		</NavBrand>

		<NavHamburger />

		<NavUl class="ml-auto flex space-x-8">
			<NavLi href="/info" class="text-lightText dark:text-darkText">Info</NavLi>
			<NavLi href="/setup" class="text-lightText dark:text-darkText">Setup</NavLi>
			<NavLi href="/main-ui" class="text-lightText dark:text-darkText">Main UI</NavLi>
			<NavLi href="/colour-buttons" class="text-lightText dark:text-darkText">Colour Buttons</NavLi>
			<NavLi href="/animations" class="text-lightText dark:text-darkText">Animations</NavLi>
		</NavUl>

		<!-- Theme Toggle Button -->
		<button 
			class="ml-4 px-4 py-2 rounded-md shadow-md transition-all duration-300 font-semibold text-lightText dark:text-darkText bg-accent dark:bg-primary-700"
			on:click={toggleTheme}>
			{isDarkMode ? 'Light Mode' : 'Dark Mode'}
		</button>
	</Navbar>

	<!-- Main Content Area -->
	<main class="pt-16 min-h-screen flex items-center justify-center transition-colors duration-500">
		<div class="text-center mt-20 mb-4">
			<slot />
		</div>
	</main>
</div>

<style>
	:global(body) {
		transition: background-color 0.5s;
		min-height: 100vh;
	}
</style>
