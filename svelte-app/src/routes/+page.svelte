<script>
    let logoPath = "/ledify-logo.png"; //path from static folder.
    import "../app.css";
</script>

<main class="main-content">
    <h1 class="title">Welcome to LEDify</h1>

    <div class="logo-container">
        <img src={logoPath} alt="LEDify Logo" class="logo"/>
    </div>

    <h2 class="statement">Transform your space with vibrant, effortless LED control.</h2>
</main>
    
<style>
    /* Styles for this page */
    .main-content{
        display: flex;
        flex-direction: column;
        align-items: center;
        margin-top: -100px;
    }

    .title{
        font-family: 'Baskerville', serif;
        font-size: 4rem;
        font-weight: bold;
        text-align: center;
        letter-spacing: 2px;
        padding-bottom: 10px;
        animation: fadeIn 1s ease-in-out;
    }

    .statement{
        font-family: 'Arial', sans-serif;
        font-size: 1.5rem;
        text-align: center;
        letter-spacing: 1px;
        padding-top: 10px;
        animation: fadeIn 2s ease-in-out;
    }

    /* Styles for Logo Image */
    .logo-container {
        display: flex;
        justify-content: center;
        margin: 30px 0;
    }

    .logo {
        max-width: 460px;
        border-radius: 20%;
        margin-top: -20px;
        animation: float 3s ease-in-out infinite;
    }

    @keyframes fadeIn{
        from {opacity: 0; transform: translateY(20px);}
        to {opacity: 1; transform: translateY(0);}
    }

    @keyframes float{
        0% {transform: translateY(0);}
        50% {transform: translateY(-10px);}
        100% {transform: translateY(0);}
    }

</style>