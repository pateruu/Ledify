<main class="info-container">
    <h1>About LEDify</h1>
    <p>LEDify is a customizable LED control project that allows users to control LED colors, brightness, and patterns wirelessly through a web interface. This project integrates a web server running on an ESP32 microcontroller, with a Svelte-based UI for an intuitive control experience.</p>
    
    <section class="features">
        <h2>Features</h2>
        <ul>
            <li>Wireless LED control with real-time updates</li>
            <li>Customizable color options and brightness levels</li>
            <li>Preset color themes and smooth gradient transitions</li>
            <li>Cross-platform support for control via mobile and desktop devices</li>
        </ul>
    </section>
    
    <section class="how-to-use">
        <h2>How to Use</h2>
        <p>1. Connect to the LEDify web interface from your device.<br>
           2. Use the Main UI to select colors, brightness, and toggle power.<br>
           3. Colour buttons and Animations tabs are for extra colour features.
           4. Customize additional settings in the Setup tab as needed.<br>
    </section>

    <section class="credits">
        <h2>Project Credits</h2>
        <p>Developed by Kevin Patel. Powered by ESP32/ESP8266 and Svelte.</p>
    </section>
</main>

<style>
    .info-container {
        max-width: 800px;
        margin: 2rem auto;
        padding: 1rem 2rem;
        color: #f0f0f0;
        line-height: 1.6;
    }

    h1, h2 {
        color: #fffa;
        margin-bottom: 1rem;
    }

    p, ul {
        margin-bottom: 1.5rem;
        color: #cccccc;
    }

    ul {
        list-style: disc;
        padding-left: 1.5rem;
    }

    .features, .how-to-use, .credits {
        margin-top: 2rem;
    }

    h2 {
        font-size: 1.5rem;
        border-bottom: 1px solid #777;
        padding-bottom: 0.5rem;
    }
</style>
