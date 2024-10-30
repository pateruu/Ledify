<script>
    let logoPath = "/ledify-logo.png"; //path from static folder.
    import "../app.css";

</script>

<main>

    <h1 class="title">Welcome to LEDify</h1>

    <div class="logo-container">
        <img src={logoPath} alt="LEDify Logo" class="logo"/>
    </div>

    <h2 class="main-page-statement">Transform your space with vibrant, effortless LED control.</h2>

</main>
    
<style>
    /* Styles for this page */
    .title{
        text-align: center;
        font-size: 4rem;
        margin-top: 70px;
        font-family: Baskerville;
    }

    .main-page-statement{
        text-align: center;
        font-size: 2rem;
        margin-top: 0px;
        font-family: Baskerville;

    }

    /*Styles for Logo Image */
    .logo{
        max-width: 460px;
        border-radius: 20%;
        margin-top: -20px;

    }

    .logo-container{
        display: flex;
        justify-content: center;
        margin: 50px 0;

    }
</style>