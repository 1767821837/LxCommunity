$(function () {
    $.get("/html/head.html",function (data) {
        $("#header").html(data);
    });

});