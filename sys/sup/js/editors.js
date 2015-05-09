$(function() {
    // Bootstrap
    $('#bootstrap-editor').wysihtml5();

    // Ckeditor standard
    $( 'textarea#ckeditor_standard' ).ckeditor({width:'98%', height: '150px', toolbar: [
		// Defines toolbar group with name (used to create voice label) and items in 3 subgroups.
		[ 'Cut', 'Copy',  'Undo', 'Redo','textcolor'  ],			// Defines toolbar group without name.
		{ name: 'basicstyles', items: [ 'Bold', 'Italic' ] }
		 
	]});
    
    $( 'textarea#tinymce_basic' ).ckeditor({width:'98%', height: '150px'});

});


// Tiny MCE
tinymce.init({
    selector: "#tinymce_basic",
    plugins: [
        "advlist autolink lists link image charmap print preview anchor",
        "searchreplace visualblocks code fullscreen",
        "insertdatetime media table contextmenu paste"
    ],
    toolbar: "insertfile undo redo | styleselect | bold italic | alignleft aligncenter alignright alignjustify | bullist numlist outdent indent | link image"
});

// Tiny MCE
tinymce.init({
    selector: "#tinymce_full",
    plugins: [
        
       " fullscreen",
       
        " template paste textcolor"
    ],
    toolbar1: " undo redo | styleselect | bold italic | alignleft aligncenter alignright alignjustify | bullist numlist outdent indent | link image",
    toolbar2: "print preview media | forecolor backcolor emoticons",
    image_advtab: true,
    templates: [
        {title: 'Test template 1', content: 'Test 1'},
        {title: 'Test template 2', content: 'Test 2'}
    ]
});