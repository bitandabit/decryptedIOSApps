//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray;
@protocol SCPerforming, SCUnlockLensControllerDelegate;

@interface SCUnlockLensController : NSObject <NSCoding>
{
    id <SCUnlockLensControllerDelegate> _delegate;
    id <SCPerforming> _filteringPerformer;
    NSMutableArray *_unlockedLenses;
    id <SCPerforming> _performer;
}

@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSMutableArray *unlockedLenses; // @synthesize unlockedLenses=_unlockedLenses;
@property(retain, nonatomic) id <SCPerforming> filteringPerformer; // @synthesize filteringPerformer=_filteringPerformer;
@property(nonatomic) __weak id <SCUnlockLensControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)pinnedLenses;
- (id)scanUnlockedLenses;
- (void)clearCache;
- (void)updateCache;
- (void)removeFromCache:(id)arg1;
- (void)processUnlockedLensesResponse:(id)arg1;
- (id)pinnedLensesFromSojuResponse:(id)arg1;
- (id)scanUnlockedLensesFromSojuResponse:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_ensureNonNilObjects;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
