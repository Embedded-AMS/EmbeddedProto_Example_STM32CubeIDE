/*
 *  This file is generated with Embedded Proto, PLEASE DO NOT EDIT!
 *  source: reply.proto
 */

// This file is generated. Please do not edit!
#ifndef REPLY_H
#define REPLY_H

#include <cstdint>
#include <MessageInterface.h>
#include <WireFormatter.h>
#include <Fields.h>
#include <MessageSizeCalculator.h>
#include <ReadBufferSection.h>
#include <RepeatedFieldFixedSize.h>
#include <FieldStringBytes.h>
#include <Errors.h>
#include <Defines.h>
#include <limits>

// Include external proto definitions

namespace demo {

class A final: public ::EmbeddedProto::MessageInterface
{
  public:
    A() = default;
    A(const A& rhs )
    {
      set_x(rhs.get_x());
      set_y(rhs.get_y());
      set_z(rhs.get_z());
    }

    A(const A&& rhs ) noexcept
    {
      set_x(rhs.get_x());
      set_y(rhs.get_y());
      set_z(rhs.get_z());
    }

    ~A() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      X = 1,
      Y = 2,
      Z = 3
    };

    A& operator=(const A& rhs)
    {
      set_x(rhs.get_x());
      set_y(rhs.get_y());
      set_z(rhs.get_z());
      return *this;
    }

    A& operator=(const A&& rhs) noexcept
    {
      set_x(rhs.get_x());
      set_y(rhs.get_y());
      set_z(rhs.get_z());
      return *this;
    }

    static constexpr char const* X_NAME = "x";
    inline void clear_x() { x_.clear(); }
    inline void set_x(const uint32_t& value) { x_ = value; }
    inline void set_x(const uint32_t&& value) { x_ = value; }
    inline uint32_t& mutable_x() { return x_.get(); }
    inline const uint32_t& get_x() const { return x_.get(); }
    inline uint32_t x() const { return x_.get(); }

    static constexpr char const* Y_NAME = "y";
    inline void clear_y() { y_.clear(); }
    inline void set_y(const uint32_t& value) { y_ = value; }
    inline void set_y(const uint32_t&& value) { y_ = value; }
    inline uint32_t& mutable_y() { return y_.get(); }
    inline const uint32_t& get_y() const { return y_.get(); }
    inline uint32_t y() const { return y_.get(); }

    static constexpr char const* Z_NAME = "z";
    inline void clear_z() { z_.clear(); }
    inline void set_z(const uint32_t& value) { z_ = value; }
    inline void set_z(const uint32_t&& value) { z_ = value; }
    inline uint32_t& mutable_z() { return z_.get(); }
    inline const uint32_t& get_z() const { return z_.get(); }
    inline uint32_t z() const { return z_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != x_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = x_.serialize_with_id(static_cast<uint32_t>(FieldNumber::X), buffer, false);
      }

      if((0U != y_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = y_.serialize_with_id(static_cast<uint32_t>(FieldNumber::Y), buffer, false);
      }

      if((0U != z_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = z_.serialize_with_id(static_cast<uint32_t>(FieldNumber::Z), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::X:
            return_value = x_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::Y:
            return_value = y_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::Z:
            return_value = z_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_x();
      clear_y();
      clear_z();

    }

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::X:
          name = X_NAME;
          break;
        case FieldNumber::Y:
          name = Y_NAME;
          break;
        case FieldNumber::Z:
          name = Z_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = x_.to_string(left_chars, indent_level + 2, X_NAME, true);
      left_chars = y_.to_string(left_chars, indent_level + 2, Y_NAME, false);
      left_chars = z_.to_string(left_chars, indent_level + 2, Z_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::uint32 x_ = 0U;
      EmbeddedProto::uint32 y_ = 0U;
      EmbeddedProto::uint32 z_ = 0U;

};

class B final: public ::EmbeddedProto::MessageInterface
{
  public:
    B() = default;
    B(const B& rhs )
    {
      set_u(rhs.get_u());
      set_v(rhs.get_v());
      set_w(rhs.get_w());
    }

    B(const B&& rhs ) noexcept
    {
      set_u(rhs.get_u());
      set_v(rhs.get_v());
      set_w(rhs.get_w());
    }

    ~B() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      U = 1,
      V = 2,
      W = 3
    };

    B& operator=(const B& rhs)
    {
      set_u(rhs.get_u());
      set_v(rhs.get_v());
      set_w(rhs.get_w());
      return *this;
    }

    B& operator=(const B&& rhs) noexcept
    {
      set_u(rhs.get_u());
      set_v(rhs.get_v());
      set_w(rhs.get_w());
      return *this;
    }

    static constexpr char const* U_NAME = "u";
    inline void clear_u() { u_.clear(); }
    inline void set_u(const double& value) { u_ = value; }
    inline void set_u(const double&& value) { u_ = value; }
    inline double& mutable_u() { return u_.get(); }
    inline const double& get_u() const { return u_.get(); }
    inline double u() const { return u_.get(); }

    static constexpr char const* V_NAME = "v";
    inline void clear_v() { v_.clear(); }
    inline void set_v(const double& value) { v_ = value; }
    inline void set_v(const double&& value) { v_ = value; }
    inline double& mutable_v() { return v_.get(); }
    inline const double& get_v() const { return v_.get(); }
    inline double v() const { return v_.get(); }

    static constexpr char const* W_NAME = "w";
    inline void clear_w() { w_.clear(); }
    inline void set_w(const double& value) { w_ = value; }
    inline void set_w(const double&& value) { w_ = value; }
    inline double& mutable_w() { return w_.get(); }
    inline const double& get_w() const { return w_.get(); }
    inline double w() const { return w_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0.0 != u_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = u_.serialize_with_id(static_cast<uint32_t>(FieldNumber::U), buffer, false);
      }

      if((0.0 != v_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = v_.serialize_with_id(static_cast<uint32_t>(FieldNumber::V), buffer, false);
      }

      if((0.0 != w_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = w_.serialize_with_id(static_cast<uint32_t>(FieldNumber::W), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::U:
            return_value = u_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::V:
            return_value = v_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::W:
            return_value = w_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_u();
      clear_v();
      clear_w();

    }

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::U:
          name = U_NAME;
          break;
        case FieldNumber::V:
          name = V_NAME;
          break;
        case FieldNumber::W:
          name = W_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = u_.to_string(left_chars, indent_level + 2, U_NAME, true);
      left_chars = v_.to_string(left_chars, indent_level + 2, V_NAME, false);
      left_chars = w_.to_string(left_chars, indent_level + 2, W_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::doublefixed u_ = 0.0;
      EmbeddedProto::doublefixed v_ = 0.0;
      EmbeddedProto::doublefixed w_ = 0.0;

};

class reply final: public ::EmbeddedProto::MessageInterface
{
  public:
    reply() = default;
    reply(const reply& rhs )
    {
      set_msgId(rhs.get_msgId());
      if(rhs.get_which_type() != which_type_)
      {
        // First delete the old object in the oneof.
        clear_type();
      }

      switch(rhs.get_which_type())
      {
        case FieldNumber::A:
          set_a(rhs.get_a());
          break;

        case FieldNumber::B:
          set_b(rhs.get_b());
          break;

        default:
          break;
      }

    }

    reply(const reply&& rhs ) noexcept
    {
      set_msgId(rhs.get_msgId());
      if(rhs.get_which_type() != which_type_)
      {
        // First delete the old object in the oneof.
        clear_type();
      }

      switch(rhs.get_which_type())
      {
        case FieldNumber::A:
          set_a(rhs.get_a());
          break;

        case FieldNumber::B:
          set_b(rhs.get_b());
          break;

        default:
          break;
      }

    }

    ~reply() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      MSGID = 1,
      A = 2,
      B = 3
    };

    reply& operator=(const reply& rhs)
    {
      set_msgId(rhs.get_msgId());
      if(rhs.get_which_type() != which_type_)
      {
        // First delete the old object in the oneof.
        clear_type();
      }

      switch(rhs.get_which_type())
      {
        case FieldNumber::A:
          set_a(rhs.get_a());
          break;

        case FieldNumber::B:
          set_b(rhs.get_b());
          break;

        default:
          break;
      }

      return *this;
    }

    reply& operator=(const reply&& rhs) noexcept
    {
      set_msgId(rhs.get_msgId());
      if(rhs.get_which_type() != which_type_)
      {
        // First delete the old object in the oneof.
        clear_type();
      }

      switch(rhs.get_which_type())
      {
        case FieldNumber::A:
          set_a(rhs.get_a());
          break;

        case FieldNumber::B:
          set_b(rhs.get_b());
          break;

        default:
          break;
      }

      return *this;
    }

    static constexpr char const* MSGID_NAME = "msgId";
    inline void clear_msgId() { msgId_.clear(); }
    inline void set_msgId(const uint32_t& value) { msgId_ = value; }
    inline void set_msgId(const uint32_t&& value) { msgId_ = value; }
    inline uint32_t& mutable_msgId() { return msgId_.get(); }
    inline const uint32_t& get_msgId() const { return msgId_.get(); }
    inline uint32_t msgId() const { return msgId_.get(); }

    FieldNumber get_which_type() const { return which_type_; }

    static constexpr char const* A_NAME = "a";
    inline bool has_a() const
    {
      return FieldNumber::A == which_type_;
    }
    inline void clear_a()
    {
      if(FieldNumber::A == which_type_)
      {
        which_type_ = FieldNumber::NOT_SET;
        type_.a_.~A();
      }
    }
    inline void set_a(const A& value)
    {
      if(FieldNumber::A != which_type_)
      {
        init_type(FieldNumber::A);
      }
      type_.a_ = value;
    }
    inline void set_a(const A&& value)
    {
      if(FieldNumber::A != which_type_)
      {
        init_type(FieldNumber::A);
      }
      type_.a_ = value;
    }
    inline A& mutable_a()
    {
      if(FieldNumber::A != which_type_)
      {
        init_type(FieldNumber::A);
      }
      return type_.a_;
    }
    inline const A& get_a() const { return type_.a_; }
    inline const A& a() const { return type_.a_; }

    static constexpr char const* B_NAME = "b";
    inline bool has_b() const
    {
      return FieldNumber::B == which_type_;
    }
    inline void clear_b()
    {
      if(FieldNumber::B == which_type_)
      {
        which_type_ = FieldNumber::NOT_SET;
        type_.b_.~B();
      }
    }
    inline void set_b(const B& value)
    {
      if(FieldNumber::B != which_type_)
      {
        init_type(FieldNumber::B);
      }
      type_.b_ = value;
    }
    inline void set_b(const B&& value)
    {
      if(FieldNumber::B != which_type_)
      {
        init_type(FieldNumber::B);
      }
      type_.b_ = value;
    }
    inline B& mutable_b()
    {
      if(FieldNumber::B != which_type_)
      {
        init_type(FieldNumber::B);
      }
      return type_.b_;
    }
    inline const B& get_b() const { return type_.b_; }
    inline const B& b() const { return type_.b_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != msgId_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = msgId_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MSGID), buffer, false);
      }

      switch(which_type_)
      {
        case FieldNumber::A:
          if(has_a() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = type_.a_.serialize_with_id(static_cast<uint32_t>(FieldNumber::A), buffer, true);
          }
          break;

        case FieldNumber::B:
          if(has_b() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = type_.b_.serialize_with_id(static_cast<uint32_t>(FieldNumber::B), buffer, true);
          }
          break;

        default:
          break;
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::MSGID:
            return_value = msgId_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::A:
          case FieldNumber::B:
            return_value = deserialize_type(id_tag, buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_msgId();
      clear_type();

    }

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::MSGID:
          name = MSGID_NAME;
          break;
        case FieldNumber::A:
          name = A_NAME;
          break;
        case FieldNumber::B:
          name = B_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = msgId_.to_string(left_chars, indent_level + 2, MSGID_NAME, true);
      left_chars = to_string_type(left_chars, indent_level + 2, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::uint32 msgId_ = 0U;

      FieldNumber which_type_ = FieldNumber::NOT_SET;
      union type
      {
        type() {}
        ~type() {}
        A a_;
        B b_;
      };
      type type_;

      void init_type(const FieldNumber field_id)
      {
        if(FieldNumber::NOT_SET != which_type_)
        {
          // First delete the old object in the oneof.
          clear_type();
        }

        // C++11 unions only support nontrivial members when you explicitly call the placement new statement.
        switch(field_id)
        {
          case FieldNumber::A:
            new(&type_.a_) A;
            break;

          case FieldNumber::B:
            new(&type_.b_) B;
            break;

          default:
            break;
         }

         which_type_ = field_id;
      }

      void clear_type()
      {
        switch(which_type_)
        {
          case FieldNumber::A:
            ::EmbeddedProto::destroy_at(&type_.a_);
            break;
          case FieldNumber::B:
            ::EmbeddedProto::destroy_at(&type_.b_);
            break;
          default:
            break;
        }
        which_type_ = FieldNumber::NOT_SET;
      }

      ::EmbeddedProto::Error deserialize_type(const FieldNumber field_id, 
                                    ::EmbeddedProto::ReadBufferInterface& buffer,
                                    const ::EmbeddedProto::WireFormatter::WireType wire_type)
      {
        ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
        
        if(field_id != which_type_)
        {
          init_type(field_id);
        }

        switch(which_type_)
        {
          case FieldNumber::A:
            return_value = type_.a_.deserialize_check_type(buffer, wire_type);
            break;
          case FieldNumber::B:
            return_value = type_.b_.deserialize_check_type(buffer, wire_type);
            break;
          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS != return_value)
        {
          clear_type();
        }
        return return_value;
      }

#ifdef MSG_TO_STRING 
      ::EmbeddedProto::string_view to_string_type(::EmbeddedProto::string_view& str, const uint32_t indent_level, const bool first_field) const
      {
        ::EmbeddedProto::string_view left_chars = str;

        switch(which_type_)
        {
          case FieldNumber::A:
            left_chars = type_.a_.to_string(left_chars, indent_level, A_NAME, first_field);
            break;
          case FieldNumber::B:
            left_chars = type_.b_.to_string(left_chars, indent_level, B_NAME, first_field);
            break;
          default:
            break;
        }

        return left_chars;
      }

#endif // End of MSG_TO_STRING
};

} // End of namespace demo
#endif // REPLY_H