Pod::Spec.new do |s|
  s.name         = "CycuridSDK"
  s.version      = "0.1.2"
  s.summary      = "Cycurid Authentication SDK."
  s.description  = "We help build systes,"
  s.homepage     = "https://cycurid.com"
  s.license = { :type => 'Copyright', :text => <<-LICENSE
                 Copyright 2018
                 Permission is granted to...
                LICENSE
              }
  s.author             = "Cycurid.com"
  s.source = { :git => "https://github.com/ekamesd/iOS-SDK", :tag => "#{s.version}" }
  s.public_header_files = "imme_ios.framework/Headers/*.h"
  s.source_files = "imme_ios.framework/Headers/*.h"
  s.vendored_frameworks = "imme_ios.framework","tensorflow_lite_gpu.framework"
  s.platform = :ios
  s.swift_version = "5.0"
  s.ios.deployment_target  = '13.0'

  s.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
    }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

    s.dependency "TensorFlowLiteGpuExperimental", "~> 0.0.1"
    s.dependency "OpenCV2", "~> 4.0.0"

end

