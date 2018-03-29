//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCMedia;

@interface SCSearchDomoSnapMediaInfo : NSObject <NSCopying>
{
    NSString *_rawSnapId;
    NSString *_sharedStorySubmissionId;
    NSString *_mediaId;
    SCMedia *_media;
    long long _mediaType;
}

@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) SCMedia *media; // @synthesize media=_media;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSString *sharedStorySubmissionId; // @synthesize sharedStorySubmissionId=_sharedStorySubmissionId;
@property(readonly, copy, nonatomic) NSString *rawSnapId; // @synthesize rawSnapId=_rawSnapId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRawSnapId:(id)arg1 sharedStorySubmissionId:(id)arg2 mediaId:(id)arg3 media:(id)arg4 mediaType:(long long)arg5;

@end
