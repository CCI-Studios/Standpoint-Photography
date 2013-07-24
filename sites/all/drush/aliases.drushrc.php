<?php

$aliases['dev'] = array(
	'uri'=> 'dev.standpointphotography.ca',
	'root' => '/home/standp/subdomains/dev/public_html',
	'remote-host'=> 'host.lambtonshield.com',
	'remote-user'=> 'standp',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	)
);

$aliases['live'] = array(
	'uri'=> 'live.standpointphotography.ca',
	'root' => '/home/standp/subdomains/live/public_html',
	'remote-host'=> 'host.lambtonshield.com',
	'remote-user'=> 'standp',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	)
);