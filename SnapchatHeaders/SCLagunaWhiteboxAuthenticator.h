//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCLagunaWhiteboxAuthenticator : NSObject
{
    void *_ctx;
}

@property(nonatomic) void *ctx; // @synthesize ctx=_ctx;
- (id)verifyAuthenticityWithCert:(id)arg1;
- (_Bool)parseVerificationResponse:(id)arg1 tag:(id)arg2;
- (_Bool)generateVerificationRequest:(id *)arg1 tag:(id *)arg2;
- (void)dealloc;
- (id)initWithAppNonce:(id)arg1 eyewearNonce:(id)arg2 snapcode:(id)arg3 sharedSecret:(id)arg4 callback:(CDUnknownFunctionPointerType)arg5;

@end

