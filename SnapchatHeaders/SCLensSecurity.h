//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSDictionary, NSString, SCPreferences;
@protocol SCPerforming;

@interface SCLensSecurity : NSObject <SCUserSessionScoped>
{
    SCPreferences *_userPreferences;
    id <SCPerforming> _performer;
}

+ (id)hashForContentAtPath:(id)arg1;
+ (id)sha256HashForData:(const void *)arg1 length:(long long)arg2;
+ (_Bool)verifyHash:(id)arg1 forContentPath:(id)arg2;
+ (id)publicKey;
- (void).cxx_destruct;
- (void)invalidate;
@property(retain, nonatomic) NSDictionary *signatureValidationFailures;
- (id)appVersion;
- (_Bool)verifyBase64Signature:(id)arg1 contentId:(id)arg2 contentHash:(id)arg3 error:(id *)arg4;
- (_Bool)isAllowedToRequestContentWithId:(id)arg1;
- (id)securityFilePathForContentPath:(id)arg1;
- (void)verifyContentAtPathValid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setContentValid:(_Bool)arg1 atPath:(id)arg2;
- (void)verifyAssetBase64Signature:(id)arg1 assetId:(id)arg2 assetContentPath:(id)arg3 assetData:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)verifyLensBase64Signature:(id)arg1 lensId:(id)arg2 lensContentPath:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithUserPreferences:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
