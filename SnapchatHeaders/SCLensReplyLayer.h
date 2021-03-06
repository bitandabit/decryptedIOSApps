//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSString, NSURL, SCOperaPage;

@interface SCLensReplyLayer : NSObject <SCOperaLayer>
{
    SCOperaPage *_page;
    NSString *_lensID;
    NSString *_ctaText;
    NSString *_skipText;
    NSURL *_url;
    NSString *_assetKey;
    NSString *_imageKey;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) NSString *imageKey; // @synthesize imageKey=_imageKey;
@property(readonly, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *skipText; // @synthesize skipText=_skipText;
@property(readonly, nonatomic) NSString *ctaText; // @synthesize ctaText=_ctaText;
@property(readonly, nonatomic) NSString *lensID; // @synthesize lensID=_lensID;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

