/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/who/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/

// disables ENTER-key
window.addEventListener('keydown', function(e) {
	if (
			e.keyIdentifier == 'U+000A' ||
			e.keyIdentifier == 'Enter' ||
			e.keyCode == 13
	) {
			if (e.target.nodeName == 'INPUT' && e.target.type == 'text') {
				e.preventDefault()
				return false
			}
	}
}, true)
