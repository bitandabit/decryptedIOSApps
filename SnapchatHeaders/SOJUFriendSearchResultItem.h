//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUFriendSearchResultItem-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SOJUFriendSearchResultItem : NSObject <SOJUFriendSearchResultItem>
{
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
    NSString *_storyPrivacy;
    NSArray *_friendmojiCategories;
    NSDictionary *_friendmojiDictionary;
    NSNumber *_position;
    NSArray *_keywords;
    NSString *_latestStoryThumbnailUrl;
    NSString *_latestStoryThumbnailIv;
    NSString *_latestStoryMediaKey;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *latestStoryMediaKey; // @synthesize latestStoryMediaKey=_latestStoryMediaKey;
@property(readonly, copy, nonatomic) NSString *latestStoryThumbnailIv; // @synthesize latestStoryThumbnailIv=_latestStoryThumbnailIv;
@property(readonly, copy, nonatomic) NSString *latestStoryThumbnailUrl; // @synthesize latestStoryThumbnailUrl=_latestStoryThumbnailUrl;
@property(readonly, copy, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(readonly, copy, nonatomic) NSNumber *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSDictionary *friendmojiDictionary; // @synthesize friendmojiDictionary=_friendmojiDictionary;
@property(readonly, copy, nonatomic) NSArray *friendmojiCategories; // @synthesize friendmojiCategories=_friendmojiCategories;
@property(readonly, copy, nonatomic) NSString *storyPrivacy; // @synthesize storyPrivacy=_storyPrivacy;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 storyPrivacy:(id)arg4 friendmojiCategories:(id)arg5 friendmojiDictionary:(id)arg6 position:(id)arg7 keywords:(id)arg8 latestStoryThumbnailUrl:(id)arg9 latestStoryThumbnailIv:(id)arg10 latestStoryMediaKey:(id)arg11;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)positionValue;
- (long long)storyPrivacyEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
