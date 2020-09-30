Pod::Spec.new do |s|  
    s.name              = 'iCardDirectMobileSDK'
    s.version           = '1.0.1'
    s.summary           = 'iCard iCardDirectMobileSDK'
    s.homepage          = 'http://icard.com/'

    s.author            = { 'Name' => 'support@icard.com' }
    s.license           = { :type => 'MIT', :file => 'LICENSE' }

    s.platform          = :ios
    s.source            = { :http => 'https://github.com/avlaev/test/raw/master/iCardDirectMobileSDK.zip' }

    s.ios.deployment_target = '13.0'
    s.ios.vendored_frameworks = 'iCardDirectMobileSDK.framework'
    #s.exclude_files = "Classes/Exclude"

end
