//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCEmbeddedMapViewOptions, SCSearchActionModel, SCSearchMapCardStyle;

@interface SCSearchMapCardViewModel : NSObject <NSCopying>
{
    NSArray *_mapStoryViewModels;
    SCSearchMapCardStyle *_mapCardStyle;
    SCEmbeddedMapViewOptions *_embeddedMapViewOptions;
    SCSearchActionModel *_tapActionModel;
    SCSearchActionModel *_dismissActionModel;
}

@property(readonly, copy, nonatomic) SCSearchActionModel *dismissActionModel; // @synthesize dismissActionModel=_dismissActionModel;
@property(readonly, copy, nonatomic) SCSearchActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, copy, nonatomic) SCEmbeddedMapViewOptions *embeddedMapViewOptions; // @synthesize embeddedMapViewOptions=_embeddedMapViewOptions;
@property(readonly, copy, nonatomic) SCSearchMapCardStyle *mapCardStyle; // @synthesize mapCardStyle=_mapCardStyle;
@property(readonly, copy, nonatomic) NSArray *mapStoryViewModels; // @synthesize mapStoryViewModels=_mapStoryViewModels;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMapStoryViewModels:(id)arg1 mapCardStyle:(id)arg2 embeddedMapViewOptions:(id)arg3 tapActionModel:(id)arg4 dismissActionModel:(id)arg5;

@end
