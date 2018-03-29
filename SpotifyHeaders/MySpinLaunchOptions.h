//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class MySpinNavigateToDestination, NSArray, NSNumber, NSString;

@interface MySpinLaunchOptions : NSObject <NSCoding>
{
    _Bool _isAllowedWhileMoving;
    _Bool _forceEnableTCPScreenCopyCapability;
    _Bool _enableDynamicJPEG;
    _Bool _launcherHasNavigationApps;
    _Bool _shouldNavigate;
    float _minJPEGQuality;
    float _maxJPEGQuality;
    NSNumber *_UDPBroadcastPort;
    NSNumber *_UDPListenPort;
    NSString *_versionList;
    NSString *_launcherURIScheme;
    double _rampUpTime;
    NSString *_navigationAppURI;
    MySpinNavigateToDestination *_navigateToDestination;
    NSArray *_validVehicleDataTypes;
    NSArray *_capabilities;
    NSNumber *_embeddedNavigationAvailable;
    NSArray *_activeKeyboardLayouts;
    long long _screenCapturingMethod;
    long long _jumpBackMethod;
    NSString *_jumpBackUrl;
    NSNumber *_launchDateTimeInterval;
    NSString *_serviceIp;
    NSNumber *_servicePort;
    NSString *_launcherSDKVersion;
}

@property(retain, nonatomic) NSString *launcherSDKVersion; // @synthesize launcherSDKVersion=_launcherSDKVersion;
@property(retain, nonatomic) NSNumber *servicePort; // @synthesize servicePort=_servicePort;
@property(retain, nonatomic) NSString *serviceIp; // @synthesize serviceIp=_serviceIp;
@property(retain) NSNumber *launchDateTimeInterval; // @synthesize launchDateTimeInterval=_launchDateTimeInterval;
@property(retain) NSString *jumpBackUrl; // @synthesize jumpBackUrl=_jumpBackUrl;
@property long long jumpBackMethod; // @synthesize jumpBackMethod=_jumpBackMethod;
@property long long screenCapturingMethod; // @synthesize screenCapturingMethod=_screenCapturingMethod;
@property(retain) NSArray *activeKeyboardLayouts; // @synthesize activeKeyboardLayouts=_activeKeyboardLayouts;
@property(retain) NSNumber *embeddedNavigationAvailable; // @synthesize embeddedNavigationAvailable=_embeddedNavigationAvailable;
@property(retain) NSArray *capabilities; // @synthesize capabilities=_capabilities;
@property(retain) NSArray *validVehicleDataTypes; // @synthesize validVehicleDataTypes=_validVehicleDataTypes;
@property(retain) MySpinNavigateToDestination *navigateToDestination; // @synthesize navigateToDestination=_navigateToDestination;
@property _Bool shouldNavigate; // @synthesize shouldNavigate=_shouldNavigate;
@property _Bool launcherHasNavigationApps; // @synthesize launcherHasNavigationApps=_launcherHasNavigationApps;
@property(retain) NSString *navigationAppURI; // @synthesize navigationAppURI=_navigationAppURI;
@property double rampUpTime; // @synthesize rampUpTime=_rampUpTime;
@property float maxJPEGQuality; // @synthesize maxJPEGQuality=_maxJPEGQuality;
@property float minJPEGQuality; // @synthesize minJPEGQuality=_minJPEGQuality;
@property _Bool enableDynamicJPEG; // @synthesize enableDynamicJPEG=_enableDynamicJPEG;
@property _Bool forceEnableTCPScreenCopyCapability; // @synthesize forceEnableTCPScreenCopyCapability=_forceEnableTCPScreenCopyCapability;
@property _Bool isAllowedWhileMoving; // @synthesize isAllowedWhileMoving=_isAllowedWhileMoving;
@property(retain) NSString *launcherURIScheme; // @synthesize launcherURIScheme=_launcherURIScheme;
@property(retain) NSString *versionList; // @synthesize versionList=_versionList;
@property(retain) NSNumber *UDPListenPort; // @synthesize UDPListenPort=_UDPListenPort;
@property(retain) NSNumber *UDPBroadcastPort; // @synthesize UDPBroadcastPort=_UDPBroadcastPort;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

