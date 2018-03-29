//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface SOJUIdentityMatchDeviceRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_deeplinkUrl;
    NSString *_clickUuid;
    NSString *_shareUuid;
    NSString *_installReferrer;
    NSNumber *_preInstalled;
    NSNumber *_pingTimestamp;
}

+ (id)withJUIdentityMatchDeviceRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setPingTimestamp:(id)arg1;
- (id)setPreInstalled:(id)arg1;
- (id)setInstallReferrer:(id)arg1;
- (id)setShareUuid:(id)arg1;
- (id)setClickUuid:(id)arg1;
- (id)setDeeplinkUrl:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)build;
- (id)setPingTimestampValue:(long long)arg1;
- (id)setPreInstalledValue:(_Bool)arg1;

@end

