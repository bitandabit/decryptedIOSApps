//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol SPTContextMenuPresenter <NSObject>
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
@property(nonatomic) __weak id <SPTContextMenuPresenterDelegate> delegate;
- (void)dismissAnimated:(_Bool)arg1;
- (void)updateHeaderViewAnimated:(_Bool)arg1;
- (void)presentWithSenderView:(UIView *)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(_Bool)arg3;
@end

