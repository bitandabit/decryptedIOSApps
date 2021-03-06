//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLagunaTask.h"

@class NSArray, NSString, SCLagunaContentMetadata;

@interface SCLagunaTaskMetadata : SCLagunaTask
{
    NSString *_contentName;
    SCLagunaContentMetadata *_metadata;
    NSArray *_mediaList;
}

@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList=_mediaList;
@property(retain, nonatomic) SCLagunaContentMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *contentName; // @synthesize contentName=_contentName;
- (void).cxx_destruct;
- (id)_mediaInfoForFileType:(unsigned long long)arg1;
- (id)pictureMetadata;
- (id)imuMetadata;
- (id)hdVideoMetadata;
- (id)sdVideoMetadata;
- (id)thumbnailMetadata;
- (id)highlightThumbnailMetadata;
- (_Bool)supportsBatchingOnTransferChannel:(long long)arg1;
- (_Bool)handleResponse:(id)arg1;
- (id)nextRequest:(long long)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isFinished;
- (unsigned long long)type;
- (id)initWithContentName:(id)arg1 mediaList:(id)arg2;

@end

