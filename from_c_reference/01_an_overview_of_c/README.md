<!-- index.html -->
<!DOCTYPE html>
<html>
<head>
    <title>C Language Documentation</title>
    <script src="https://cdn.jsdelivr.net/npm/marked/marked.min.js"></script>
    <style>
        .button-container { margin: 20px; }
        button { padding: 10px 20px; margin-right: 10px; }
        #content { margin: 20px; padding: 20px; border: 1px solid #ccc; }
    </style>
</head>
<body>
    <div class="button-container">
        <button onclick="loadDoc('en')">English</button>
        <button onclick="loadDoc('uz')">Uzbek</button>
    </div>
    <div id="content"></div>

    <script>
        async function loadDoc(lang) {
            try {
                const response = await fetch(`1_${lang}.md`);
                const markdown = await response.text();
                document.getElementById('content').innerHTML = marked.parse(markdown);
            } catch (error) {
                document.getElementById('content').innerHTML = 
                    `<h3>Error loading ${lang} documentation</h3>`;
            }
        }
        
        // Load English by default
        loadDoc('en');
    </script>
</body>
</html>