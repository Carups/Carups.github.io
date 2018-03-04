var keyBox1 = document.encode.encodeStr;
var keyBox2 = document.decode.decodeStr;


// обработчик изменения текста
function onchange1(e){
    // получаем элемент printBlock
    var printEncode = document.getElementById("printEncode");
    // получаем новое значение
    var val = e.target.value;
    // установка значения
    printEncode.textContent = "Ответ: " + Module.encode(val)
    
}

function onchange2(e){
    // получаем элемент printBlock
    var printDecode = document.getElementById("printDecode");
    // получаем новое значение
    var val = e.target.value;
    // установка значения
    printDecode.textContent = "Ответ: " + Module.decode(val)
}

keyBox1.addEventListener("change", onchange1);
keyBox2.addEventListener("change", onchange2);
