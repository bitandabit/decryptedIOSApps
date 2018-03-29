//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSArray, NSString, SCOperaPage;

@interface SCStoryManagementOperaLayer : NSObject <SCOperaLayer>
{
    SCOperaPage *_page;
    NSArray *_cellViewModels;
    unsigned long long _currentIndex;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, copy, nonatomic) NSArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

