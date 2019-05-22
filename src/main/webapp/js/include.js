$(function () {
    $.get("/html/head.html",function (data) {
        $("#header").html(data);
    });
    $.get("/html/footer.html",function (data) {
        $("#footer").html(data);
    });

});