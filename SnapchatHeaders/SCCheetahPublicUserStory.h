//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCMedia, SCSearchThumbnail;

@interface SCCheetahPublicUserStory : NSObject <NSCopying, NSCoding>
{
    _Bool _isPopular;
    _Bool _isOfficial;
    _Bool _isFollowed;
    _Bool _isFollowing;
    int _totalNumSnaps;
    NSArray *_snaps;
    NSString *_userId;
    SCSearchThumbnail *_imageThumbnail;
    SCSearchThumbnail *_videoFirstframeThumbnail;
    SCMedia *_videoThumbnail;
    NSString *_displayName;
    NSString *_userName;
    NSString *_emoji;
    NSString *_bitmojiAvatarId;
    double _totalDurationSecs;
    double _displayTimestampSecs;
    NSString *_bitmojiAvatarSelfieId;
    NSArray *_postSubscribeSuggestions;
}

@property(readonly, copy, nonatomic) NSArray *postSubscribeSuggestions; // @synthesize postSubscribeSuggestions=_postSubscribeSuggestions;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarSelfieId; // @synthesize bitmojiAvatarSelfieId=_bitmojiAvatarSelfieId;
@property(readonly, nonatomic) double displayTimestampSecs; // @synthesize displayTimestampSecs=_displayTimestampSecs;
@property(readonly, nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(readonly, nonatomic) double totalDurationSecs; // @synthesize totalDurationSecs=_totalDurationSecs;
@property(readonly, nonatomic) int totalNumSnaps; // @synthesize totalNumSnaps=_totalNumSnaps;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(readonly, nonatomic) _Bool isOfficial; // @synthesize isOfficial=_isOfficial;
@property(readonly, nonatomic) _Bool isPopular; // @synthesize isPopular=_isPopular;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(readonly, copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) SCMedia *videoThumbnail; // @synthesize videoThumbnail=_videoThumbnail;
@property(readonly, copy, nonatomic) SCSearchThumbnail *videoFirstframeThumbnail; // @synthesize videoFirstframeThumbnail=_videoFirstframeThumbnail;
@property(readonly, copy, nonatomic) SCSearchThumbnail *imageThumbnail; // @synthesize imageThumbnail=_imageThumbnail;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnaps:(id)arg1 userId:(id)arg2 imageThumbnail:(id)arg3 videoFirstframeThumbnail:(id)arg4 videoThumbnail:(id)arg5 displayName:(id)arg6 userName:(id)arg7 emoji:(id)arg8 isPopular:(_Bool)arg9 isOfficial:(_Bool)arg10 isFollowed:(_Bool)arg11 bitmojiAvatarId:(id)arg12 totalNumSnaps:(int)arg13 totalDurationSecs:(double)arg14 isFollowing:(_Bool)arg15 displayTimestampSecs:(double)arg16 bitmojiAvatarSelfieId:(id)arg17 postSubscribeSuggestions:(id)arg18;
- (id)initWithCoder:(id)arg1;

@end

