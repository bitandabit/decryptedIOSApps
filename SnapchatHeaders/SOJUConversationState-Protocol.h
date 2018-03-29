//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary;

@protocol SOJUConversationState <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSDictionary *userSnapReleases;
@property(readonly, copy, nonatomic) NSDictionary *userChatReleases;
@property(readonly, copy, nonatomic) NSArray *userSnapReleasesV2;
@property(readonly, copy, nonatomic) NSArray *userChatReleasesV2;
@property(readonly, copy, nonatomic) NSDictionary *snapSequences;
@property(readonly, copy, nonatomic) NSDictionary *updateSequences;
@property(readonly, copy, nonatomic) NSDictionary *userSequences;
@end

