//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCContextCardController.h"

@class NSError, SCContextCardActionExecutor, SCContextErrorCardViewCell;

@interface SCContextErrorCardController : SCContextCardController
{
    SCContextErrorCardViewCell *_errorCardView;
    NSError *_error;
    SCContextCardActionExecutor *_retryAction;
    double _cardHeight;
}

@property(nonatomic) double cardHeight; // @synthesize cardHeight=_cardHeight;
@property(retain, nonatomic) SCContextCardActionExecutor *retryAction; // @synthesize retryAction=_retryAction;
- (void).cxx_destruct;
- (struct CGSize)sizeForCell;
- (Class)cellClass;
- (id)cellTypeIdentifier;
- (void)attachCardView:(id)arg1;
- (id)initWithId:(id)arg1 contextSession:(id)arg2 error:(id)arg3;

@end

