//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBContentOperation.h"
#import "EXP_HUBViewContentOffsetObserver.h"
#import "EXP_SPTHubPagedContentOperationDelegate.h"

@class NSString;

@interface EXP_SPTHubPagedContentOperationContainer : NSObject <EXP_SPTHubPagedContentOperationDelegate, EXP_HUBContentOperation, EXP_HUBViewContentOffsetObserver>
{
    _Bool _morePagesAvailable;
    _Bool _loading;
    id <EXP_HUBContentOperationDelegate> _delegate;
    id <EXP_SPTHubPagedContentOperation> _pagedContentOperation;
    unsigned long long _currentPage;
    id <EXP_HUBViewModelBuilder> _previousViewModelBuilder;
}

@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool morePagesAvailable; // @synthesize morePagesAvailable=_morePagesAvailable;
@property(retain, nonatomic) id <EXP_HUBViewModelBuilder> previousViewModelBuilder; // @synthesize previousViewModelBuilder=_previousViewModelBuilder;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(readonly, nonatomic) id <EXP_SPTHubPagedContentOperation> pagedContentOperation; // @synthesize pagedContentOperation=_pagedContentOperation;
@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadNextPage;
- (void)pagedContentOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)pagedContentOperation:(id)arg1 didSucceedWithViewModelBuilder:(id)arg2 morePagesAvailable:(_Bool)arg3;
- (void)hubView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithPagedContentOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

