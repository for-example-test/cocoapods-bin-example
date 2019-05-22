//
//  OCHooking.h
//  OCHooking
//
//  Created by tripleCC on 4/18/19.
//

#import <Foundation/Foundation.h>
#import "OCHBlockMethod.h"

NS_ASSUME_NONNULL_BEGIN

@interface OCHooking : NSObject
+ (SEL)swizzledSelectorForSelector:(SEL)selector;

+ (void)swizzleMethod:(SEL)originalSelector onClass:(_Nonnull Class)cls withSwizzledSelector:(SEL)swizzledSelector;
+ (void)swizzleClassMethod:(SEL)originalSelector onClass:(_Nonnull Class)cls withSwizzledSelector:(SEL)swizzledSelector;

+ (NSInvocation * _Nonnull)swizzleMethod:(SEL)originalSelector onClass:(_Nonnull Class)cls withBlockMethod:(OCHBlockMethod * _Nonnull)blockMethod;
+ (NSInvocation * _Nonnull)swizzleClassMethod:(SEL)originalSelector onClass:(_Nonnull Class)cls withBlockMethod:(OCHBlockMethod * _Nonnull)blockMethod;
@end

NS_ASSUME_NONNULL_END
