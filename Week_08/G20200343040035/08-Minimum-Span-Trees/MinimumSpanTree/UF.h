dTo("body")),b.modalMask=a},close:function(){var a=this;a.isOpen&&(a.$el.css("display","none"),a.modalMask.css("display","none"),a.isOpen=!1)},show:function(){if(!this.isOpen){var a,b,c,d,e=this;a=jQuery("body"),b=a.outerHeight(!0)-a.outerHeight(),c=jQuery(window).height()-b,c-=e.$el.height(),c/=2,d=jQuery(window).width()-e.$el.width(),d/=2,e.$el.css("top",c+"px"),e.$el.css("left",d+"px"),e.$el.css("display","block"),e.modalMask.css("display","block"),e.firstShow?e.scroller.data("jsp").scrollTo(0,0):(e.$el.find(".mask-top").css("display","none"),e.scroller=e.$el.find(".modal-body").on("jsp-scroll-y",function(a,b,c,d){c?e.$el.find(".mask-top").css("display","none"):e.$el.find(".mask-top").css("display","block"),d?e.$el.find(".mask-bottom").css("display","none"):e.$el.find(".mask-bottom").css("display","block")}).jScrollPane(),e.firstShow=!0),e.isOpen=!0}}})},{"./BaseView":11}],13:[function(a,b,c){var d=a("../collections/DependencyGraphs"),e=a("../collections/Objectives"),f=a("./BaseView"),g=a("./ActRewardsView"),h=a("./acts/act1/Act1View"),i=a("./acts/act2/Act2View"),j=a("./acts/act3/Act3View"),k=a("./ToolsView"),l=a("./TutorialView");b.exports=f.extend({template:"main-template.html",cls:"bw-overlay",acts:[new h,new i,new j],actCache:{},afterRender:function(){function a(){jQuery(".main-loader").animate({opacity:0},{duration:500}),jQuery(".act-error-mask").css("display","table"),jQuery(".btn-container").css("display","none")}function b(){d.isLoaded&&e.isLoaded&&(jQuery(".main-loader").animate({opacity:0