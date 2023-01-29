function add() {
    let a = Number(document.getElementById("augend").value)
    let b = Number(document.getElementById("addend").value)
    if (a == 0) {
        window.alert("Augend cannot be blank")
        return
    }

    if (b == 0) {
        window.alert("Addend cannot be blank")
        return
    }

    let c = a + b
    document.getElementById("sum").value = c
}

function calculate_factorial() {
    let n = Number(document.getElementById("factorial_number").value)

    if (n == 0) {
        window.alert("Number cannot be blank")
        return
    }

    let f = 1

    for(i=n; i>=1; i--) {
        f = f * i
    }

    document.getElementById("factorial").value = f
}