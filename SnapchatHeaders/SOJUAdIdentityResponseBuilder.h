//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SOJUAdIdentityResponseBuilder : NSObject
{
    NSString *_rawUserData;
    NSString *_userAdId;
    NSString *_trackHostAndPath;
    NSString *_thirdPartyTrackHostAndPath;
    NSString *_trackRequestCookie;
}

+ (id)withJUAdIdentityResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setTrackRequestCookie:(id)arg1;
- (id)setThirdPartyTrackHostAndPath:(id)arg1;
- (id)setTrackHostAndPath:(id)arg1;
- (id)setUserAdId:(id)arg1;
- (id)setRawUserData:(id)arg1;
- (id)build;

@end

