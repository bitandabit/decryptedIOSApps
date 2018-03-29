//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, SOJUIdentityMischiefMobCreationRequest;

@interface SOJUIdentityCreateMischiefRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_uuid;
    NSString *_name;
    NSArray *_participants;
    SOJUIdentityMischiefMobCreationRequest *_mischiefMobCreationRequest;
    NSString *_mischiefCreationSource;
}

+ (id)withJUIdentityCreateMischiefRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setMischiefCreationSource:(id)arg1;
- (id)setMischiefMobCreationRequest:(id)arg1;
- (id)setParticipants:(id)arg1;
- (id)setName:(id)arg1;
- (id)setUuid:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)build;
- (id)setMischiefCreationSourceEnum:(long long)arg1;

@end
