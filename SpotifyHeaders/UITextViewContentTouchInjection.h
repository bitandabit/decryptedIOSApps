//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UITextViewContentTouchInjection : NSObject
{
}

+ (struct _NSRange)textView:(id)arg1 startSelectedRangeAtPoint:(struct CGPoint)arg2 end:(_Bool)arg3;
+ (void)selectAllText:(id)arg1;
+ (struct _NSRange)visibleRange:(id)arg1;
+ (void)textView:(id)arg1 setCursorAtPoint:(struct CGPoint)arg2;
+ (void)textView:(id)arg1 becomeFirstResponderAtPoint:(struct CGPoint)arg2;
+ (void)view:(id)arg1 handleTouchDownInside:(id)arg2;
+ (_Bool)isActive:(id)arg1;
+ (_Bool)shouldHandleEventsForSubviews;
+ (long long)view:(id)arg1 handleTouchEvent:(id)arg2;

@end

