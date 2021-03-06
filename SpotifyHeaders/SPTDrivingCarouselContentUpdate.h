//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SPTDrivingCarouselContentUpdate : NSObject
{
    NSArray *_addedIndexPaths;
    NSArray *_deletedIndexPaths;
    NSArray *_movedIndexPaths;
}

@property(readonly, nonatomic) NSArray *movedIndexPaths; // @synthesize movedIndexPaths=_movedIndexPaths;
@property(readonly, nonatomic) NSArray *deletedIndexPaths; // @synthesize deletedIndexPaths=_deletedIndexPaths;
@property(readonly, nonatomic) NSArray *addedIndexPaths; // @synthesize addedIndexPaths=_addedIndexPaths;
- (void).cxx_destruct;
- (id)initWithAddedIndexPaths:(id)arg1 deletedIndexPaths:(id)arg2 movedIndexPaths:(id)arg3;

@end

