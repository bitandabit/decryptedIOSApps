//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSArray, NSString, SCOperaPage;

@interface SCOperaOurStoryViewersLayer : NSObject <SCOperaLayer>
{
    _Bool _shouldEnableDebug;
    SCOperaPage *_page;
    NSArray *_dynamicStories;
    unsigned long long _viewsCount;
    unsigned long long _screenshotsCount;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) _Bool shouldEnableDebug; // @synthesize shouldEnableDebug=_shouldEnableDebug;
@property(readonly, nonatomic) unsigned long long screenshotsCount; // @synthesize screenshotsCount=_screenshotsCount;
@property(readonly, nonatomic) unsigned long long viewsCount; // @synthesize viewsCount=_viewsCount;
@property(readonly, copy, nonatomic) NSArray *dynamicStories; // @synthesize dynamicStories=_dynamicStories;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

