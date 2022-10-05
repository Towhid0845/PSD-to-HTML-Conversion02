$(function($){
//    banner js start
    $('.banner_slide').slick({
        dots: false,
        arrows: true,
        prevArrow: '<i class="fas fa-chevron-left banner_left_arrow"></i>',
        nextArrow: '<i class="fas fa-chevron-right banner_right_arrow"></i>',
        autoplay: true,
        autoplaySpeed: 3000,
        slidesToShow: 1,
        slidesToScroll:1,
    });
//    banner js end
});
