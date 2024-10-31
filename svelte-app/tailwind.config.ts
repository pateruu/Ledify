import type { Config } from 'tailwindcss';
import flowbitePlugin from 'flowbite/plugin'

export default {
  content: ['./src/**/*.{html,js,svelte,ts}', './node_modules/flowbite-svelte/**/*.{html,js,svelte,ts}'],
  darkMode: 'class',
  theme: {
    extend: {
      colors: {
        //Custom Colours for light and dark modes.
        lightBg: '#f1f5f9',    //Light background color
        lightText: '#1e293b',  //Light text color
        darkBg: '#1e293b',     //Dark background color
        darkText: '#f1f5f9',   //Dark text color
        accent: '#64748b',     //Accent color

        //flowbite-svelte
        primary: {
          50: '#FFF5F2',
          100: '#FFF1EE',
          200: '#FFE4DE',
          300: '#FFD5CC',
          400: '#FFBCAD',
          500: '#FE795D',
          600: '#EF562F',
          700: '#EB4F27',
          800: '#CC4522',
          900: '#A5371B'
        }
      }
    }
  },
  plugins: [flowbitePlugin]
} as Config;