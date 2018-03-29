//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSDictionary, NSString, NSURL, SCOperaPage, UIColor;

@interface SCOperaRemoteVideoLayer : NSObject <SCOperaLayer>
{
    NSURL *_cacheDirectory;
    _Bool _isInline;
    _Bool _videoRotationEnabled;
    SCOperaPage *_page;
    NSString *_firstFrameImageKey;
    NSString *_videoId;
    UIColor *_primaryColor;
    NSDictionary *_remoteURLToRelativePath;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) NSDictionary *remoteURLToRelativePath; // @synthesize remoteURLToRelativePath=_remoteURLToRelativePath;
@property(readonly, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(readonly, nonatomic) _Bool videoRotationEnabled; // @synthesize videoRotationEnabled=_videoRotationEnabled;
@property(readonly, nonatomic) _Bool isInline; // @synthesize isInline=_isInline;
@property(readonly, copy, nonatomic) NSString *firstFrameImageKey; // @synthesize firstFrameImageKey=_firstFrameImageKey;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)localURLForRemoteURL:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

