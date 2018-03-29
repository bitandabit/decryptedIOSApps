//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensDataProviderBase.h"

#import "SCOnDemandLensDataStoreListener-Protocol.h"

@class NSString, SOJUUnlockablesOndemandTemplateCategory;

@interface SCOnDemandLensDataProvider : SCLensDataProviderBase <SCOnDemandLensDataStoreListener>
{
    SOJUUnlockablesOndemandTemplateCategory *_templateCategory;
}

- (void).cxx_destruct;
- (id)_storedLensesForCurrentCategory;
- (id)_keyForCurrentCategory;
- (void)_setDownloadableDataForCurrentCategory:(id)arg1;
- (id)_downloadableDataForCurrentCategory;
- (void)updateLenses;
- (void)onDemandLensDataStoreDidUpdate:(id)arg1;
- (void)updateDownloadableData;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 templateCategory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
