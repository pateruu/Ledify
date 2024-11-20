<main class="setup-container">

    <h1>Setup Page</h1>
    <p>Enter Your Desired Settings Below:</p>

    <form class="settings-form">
        
        <div class="form-item">
            <label for="name">Insert Text:</label>
            <input type="text" id="name" placeholder="Enter value...">
        </div>
        
        <div class="form-item">
            <label for="name">Insert Text:</label>
            <input type="text" id="name" placeholder="Enter value...">
        </div>

        <div class="form-item">
            <label for="name">Insert Text:</label>
            <input type="text" id="name" placeholder="Enter value...">
        </div>

        <div class="form-item">
            <label for="name">Insert Text:</label>
            <input type="text" id="name" placeholder="Enter value...">
        </div>

        <div class="form-item">
            <label for="name">Insert Text:</label>
            <input type="text" id="name" placeholder="Enter value...">
        </div>
        
        <button type="submit">Apply Settings</button>

    </form>
</main>
    
<style>

.setup-container{
    max-width: 600px;
    margin: 2rem auto;
    padding: 2rem;
    background-color: #f9f9f9;
    border-radius: 12px;
    box-shadow: 0px 4px 15px rgba(0, 0, 0, 0.1);
    animation: fadeIn 1s ease-in-out;
}

input[type="text"]{
    padding: 0.7rem;
    font-size: 1rem;
    border: 1px solid #ccc;
    border-radius: 8px;
    transition: box-shadow 0.3s ease, transform 0.3s ease;
}

input[type="text"]:focus{
    outline: none;
    box-shadow: 0px 0px 10px rgba(0, 123, 255, 0.5);
    transform: scale(1.02);
}

h1{
    text-align: center;
    font-size: 2.5rem;
    margin-bottom: 1rem;
    color: #333;
    animation: slideDown 0.7s ease-in-out;
}

p{
    text-align: center;
    font-size: 1.2rem;
    margin-bottom: 2rem;
    color: #666;
    animation: fadeIn 1s ease-in-out 0.3s;
}

/* Form styling */
.settings-form{
    display: flex;
    flex-direction: column;
    gap: 1.5rem;
    animation: fadeIn 1s ease-in-out 0.5s;
}

.form-item{
    display: flex;
    flex-direction: column;
}

label{
    font-weight: bold;
    color: #444;
    margin-bottom: 0.5rem;
}

button{
    padding: 0.8rem 1.5rem;
    font-size: 1.1rem;
    color: white;
    background-color: #007bff;
    border: none;
    border-radius: 8px;
    cursor: pointer;
    align-self: center;
    transition: background-color 0.3s ease, transform 0.3s ease;
}

button:hover{
    background-color: #0056b3;
    transform: scale(1.05);
}

/* Animations */
@keyframes fadeIn{
    from{
        opacity: 0;
        transform: translateY(20px);
    }

    to{
        opacity: 1;
        transform: translateY(0);
    }
}

@keyframes slideDown{
    from {
        transform: translateY(-30px);
        opacity: 0;
    }

    to{
        transform: translateY(0);
        opacity: 1;
    }
}

</style>